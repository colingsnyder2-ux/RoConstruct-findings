// from server: 58% by atomic.potato
struct CXTPControlSelector {
    unsigned int GetColor(unsigned int rgb);
};

unsigned int CXTPControlSelector::GetColor(unsigned int rgb)
{
    unsigned int r = rgb & 0xff;
    unsigned int g = (rgb >> 8) & 0xff;
    unsigned int b = (rgb >> 16) & 0xff;

    unsigned int maxv;
    if (r < g) {
        maxv = (g < b) ? b : g;
    } else {
        maxv = (r < b) ? b : r;
    }

    unsigned int minv;
    if (r > g) {
        minv = (g > b) ? b : g;
    } else {
        minv = (r > b) ? b : r;
    }

    unsigned int sum = minv + maxv;
    unsigned int half = (int)(sum + 1) / 2;

    unsigned int h;
    unsigned int s;
    if (maxv == minv) {
        h = 0xff;
        s = 0;
    } else {
        unsigned int diff = maxv - minv;
        if ((int)half < 0x7f) {
            s = (diff + 1) * 256 / sum;
        } else {
            s = diff * 256 / (0x200 - sum);
        }

        if (r == maxv) {
            h = (int)(g - b) * 256 / (int)diff;
        } else if (g == maxv) {
            h = (int)(b - r) * 256 / (int)diff + 0x200;
        } else {
            h = (int)(r - g) * 256 / (int)diff + 0x400;
        }

        h = (unsigned int)((int)h / 6);
        if ((int)h < 0) {
            h += 0x100;
        }
    }

    unsigned int rr = (h * 0xef) / 0xf0;
    unsigned int gg = (s * 0xf0) / 0xf0;
    unsigned int bb = (half * 0xf0) / 0xf0;

    if ((int)rr >= 0xef) rr = 0xef;
    if ((int)gg >= 0xf0) gg = 0xf0;
    if ((int)bb >= 0xf0) bb = 0xf0;

    return ((bb & 0xff) << 16) | ((gg & 0xff) << 8) | (rr & 0xff);
}
