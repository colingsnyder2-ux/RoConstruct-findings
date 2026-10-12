// from server: 97% by king_originala
extern int g_hit, g_miss;

double hitRatio() {
    int n = g_hit + g_miss;
    if (n == 0) return -1.0f;
    return (double)g_hit / n;
}
