// from server: 93% by tester
struct ContentProvider {
    int getCachedRemoteSourceLoadState();
};

struct Helper {
    int field4;
};

struct HelperMaker {
    Helper* makeHelper();
};

struct HelperDestroyer {
    void destroyHelper();
};

int ContentProvider::getCachedRemoteSourceLoadState() {
    char buf[0x84];
    HelperMaker* m = (HelperMaker*)buf;
    Helper* h = m->makeHelper();
    int result = h->field4;
    HelperDestroyer* d = (HelperDestroyer*)buf;
    d->destroyHelper();
    return result;
}
