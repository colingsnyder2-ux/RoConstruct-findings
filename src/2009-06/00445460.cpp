// from server: 76% by why2
struct CIDEDocManager {
    int getSomething(int, int, int, int, int);
    char pad[0x24];
    int field_24;
};

int CIDEDocManager::getSomething(int a, int b, int c, int d, int e) {
    int result = e;
    if (result == 0) {
        result = field_24;
    }
    return result;
}
