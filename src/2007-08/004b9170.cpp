// from server: 93% by tester
struct RakPeer {
    char pad[0x730];
    double field730;
    unsigned short field738;
    unsigned short field73a;
    int check();
};

int RakPeer::check() {
    if (field730 != 0.0) {
        if (field738 == 0 && field73a == 0) {
            return 0;
        }
    }
    return 1;
}
