/*John Carmack

  maneira de otimizar o:
  float y = 1 / sqrt(x);
*/

float Q_rsqrt( float number)
{
    long i;
    float x2, y;
    const float threehalfs = 1.5F;

    x2 = number * 0.5F;
    y = number;
    i = * (long * ) &y;             //evil floating point bit hack
    i = 0x5f3759df - (i >> 1);     
    y = * (float * ) &i;
    y = y * (threehalfs - (x2 * y * y));   //1st interation
//  y = y * (threehalfs - (x2 * y * y));   //2nd interation, can be removed
}



// https://www.youtube.com/watch?v=p8u_k2LIZyo