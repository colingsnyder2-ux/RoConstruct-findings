// from server: 100% by tester
// roc 2008-06 005cddd0  unit: RBX::Camera  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cddd0
//
// 005cddd0  8b442404             mov eax, dword ptr [esp + 4]
// 005cddd4  56                   push esi
// 005cddd5  8bf1                 mov esi, ecx
// 005cddd7  3986d4010000         cmp dword ptr [esi + 0x1d4], eax
// 005cdddd  7424                 je 0x5cde03
// 005cdddf  68b09a9700           push 0x979ab0
// 005cdde4  8986d4010000         mov dword ptr [esi + 0x1d4], eax
// 005cddea  e811fde3ff           call 0x40db00
// 005cddef  8bce                 mov ecx, esi
// 005cddf1  e85ae1ffff           call 0x5cbf50
// 005cddf6  85c0                 test eax, eax
// 005cddf8  7409                 je 0x5cde03
// 005cddfa  8b10                 mov edx, dword ptr [eax]
// 005cddfc  8bc8                 mov ecx, eax
// 005cddfe  8b420c               mov eax, dword ptr [edx + 0xc]
// 005cde01  ffd0                 call eax
// 005cde03  5e                   pop esi
// 005cde04  c20400               ret 4

struct Desc;
extern Desc desc_cameraType;
struct Sub { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); };
struct Cam {
    char pad[0x1d4];
    int cameraType;
    void raiseChanged(const Desc&);
    Sub* getSub();
    void setCameraType(int t);
};
void Cam::setCameraType(int t) {
    if (cameraType != t) {
        cameraType = t;
        raiseChanged(desc_cameraType);
        Sub* s = getSub();
        if (s) s->v3();
    }
}
