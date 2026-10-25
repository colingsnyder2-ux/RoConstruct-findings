// from server: 100% by tester
// roc 2008-06 00563230  unit: RBX::ContentProvider  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00563230
//
// 00563230  81ec84000000         sub esp, 0x84
// 00563236  56                   push esi
// 00563237  8d4c2404             lea ecx, [esp + 4]
// 0056323b  e8a0e8f9ff           call 0x501ae0
// 00563240  8b7004               mov esi, dword ptr [eax + 4]
// 00563243  8d4c2404             lea ecx, [esp + 4]
// 00563247  e874ffffff           call 0x5631c0
// 0056324c  8bc6                 mov eax, esi
// 0056324e  5e                   pop esi
// 0056324f  81c484000000         add esp, 0x84
// 00563255  c3                   ret 

struct Helper { int field0; int field4; };
struct ContentProvider { int getCachedRemoteSourceLoadState(); };
struct HelperMaker { Helper* makeHelper(); };
struct HelperDestroyer { void destroyHelper(); };
int ContentProvider::getCachedRemoteSourceLoadState() {
    char buf[0x84];
    HelperMaker* m = (HelperMaker*)buf;
    Helper* h = m->makeHelper();
    int result = h->field4;
    HelperDestroyer* d = (HelperDestroyer*)buf;
    d->destroyHelper();
    return result;
}
