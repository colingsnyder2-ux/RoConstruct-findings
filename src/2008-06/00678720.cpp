// from server: 82% by king_originala
void __cdecl sortThree(float& a, float& b, float& c)
{
    if ((double)a > b && &b != &a) {
        double temp = b;
        b = a;
        a = temp;
    }
    if ((double)b > c && &c != &b) {
        double temp = c;
        c = b;
        b = temp;
    }
    if ((double)a > b && &b != &a) {
        double temp = b;
        b = a;
        a = temp;
    }
}
