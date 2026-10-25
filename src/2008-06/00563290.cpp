// from server: 100% by king_originala
// roc 2008-06 00563290  unit: RBX::ContentProvider  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00563290
//
// 00563290  81ec84000000         sub esp, 0x84
// 00563296  56                   push esi
// 00563297  8d4c2404             lea ecx, [esp + 4]
// 0056329b  e840e8f9ff           call 0x501ae0
// 005632a0  8b700c               mov esi, dword ptr [eax + 0xc]
// 005632a3  8d4c2404             lea ecx, [esp + 4]
// 005632a7  e814ffffff           call 0x5631c0
// 005632ac  8bc6                 mov eax, esi
// 005632ae  5e                   pop esi
// 005632af  81c484000000         add esp, 0x84
// 005632b5  c3                   ret 

struct Helper { int padding[3]; int value; };
struct HelperMaker { Helper* makeHelper(); };
struct HelperDestroyer { void destroyHelper(); };
struct ContentProvider { int getCachedRemoteSourceLoadState(); };

int ContentProvider::getCachedRemoteSourceLoadState() {
    char buf[0x84];
    Helper* h = ((HelperMaker*)buf)->makeHelper();
    int result = h->value;
    ((HelperDestroyer*)buf)->destroyHelper();
    return result;
}
