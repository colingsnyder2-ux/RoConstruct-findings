// from server: 100% by king_originala
// roc 2008-06 00563940  unit: RBX::ContentProvider  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00563940
//
// 00563940  81ec84000000         sub esp, 0x84
// 00563946  56                   push esi
// 00563947  8d4c2404             lea ecx, [esp + 4]
// 0056394b  e890e1f9ff           call 0x501ae0
// 00563950  8b7064               mov esi, dword ptr [eax + 0x64]
// 00563953  8d4c2404             lea ecx, [esp + 4]
// 00563957  e864f8ffff           call 0x5631c0
// 0056395c  8bc6                 mov eax, esi
// 0056395e  5e                   pop esi
// 0056395f  81c484000000         add esp, 0x84
// 00563965  c3                   ret 

struct Helper {
    char padding[0x64];
    int field64;
};
struct HelperMaker { Helper* makeHelper(); };
struct HelperDestroyer { void destroyHelper(); };
struct ContentProvider { int getCachedRemoteSourceLoadState(); };

int ContentProvider::getCachedRemoteSourceLoadState() {
    char buf[0x84];
    HelperMaker* m = (HelperMaker*)buf;
    Helper* h = m->makeHelper();
    int result = h->field64;
    HelperDestroyer* d = (HelperDestroyer*)buf;
    d->destroyHelper();
    return result;
}
