// from server: 100% by king_originala
// roc 2008-06 005873c0  unit: RBX::VChangeHistoryService::?$FactoryProduct  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005873c0
//
// 005873c0  8b442404             mov eax, dword ptr [esp + 4]
// 005873c4  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005873c8  56                   push esi
// 005873c9  8bf1                 mov esi, ecx
// 005873cb  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005873cf  8906                 mov dword ptr [esi], eax
// 005873d1  8b442414             mov eax, dword ptr [esp + 0x14]
// 005873d5  894e04               mov dword ptr [esi + 4], ecx
// 005873d8  895608               mov dword ptr [esi + 8], edx
// 005873db  8b08                 mov ecx, dword ptr [eax]
// 005873dd  894e0c               mov dword ptr [esi + 0xc], ecx
// 005873e0  8b5004               mov edx, dword ptr [eax + 4]
// 005873e3  895610               mov dword ptr [esi + 0x10], edx
// 005873e6  8b4008               mov eax, dword ptr [eax + 8]
// 005873e9  85c0                 test eax, eax
// 005873eb  741d                 je 0x58740a
// 005873ed  8b10                 mov edx, dword ptr [eax]
// 005873ef  8bc8                 mov ecx, eax
// 005873f1  8b4208               mov eax, dword ptr [edx + 8]
// 005873f4  ffd0                 call eax
// 005873f6  8a4c2418             mov cl, byte ptr [esp + 0x18]
// 005873fa  894614               mov dword ptr [esi + 0x14], eax
// 005873fd  884e18               mov byte ptr [esi + 0x18], cl
// 00587400  c6461900             mov byte ptr [esi + 0x19], 0
// 00587404  8bc6                 mov eax, esi
// 00587406  5e                   pop esi
// 00587407  c21400               ret 0x14
// 0058740a  8a4c2418             mov cl, byte ptr [esp + 0x18]
// 0058740e  33c0                 xor eax, eax
// 00587410  894614               mov dword ptr [esi + 0x14], eax
// 00587413  884619               mov byte ptr [esi + 0x19], al
// 00587416  884e18               mov byte ptr [esi + 0x18], cl
// 00587419  8bc6                 mov eax, esi
// 0058741b  5e                   pop esi
// 0058741c  c21400               ret 0x14

struct Object {
    virtual void first() = 0;
    virtual void second() = 0;
    virtual Object *clone() = 0;
};

struct Source {
    int first;
    int second;
    Object *object;
};

struct S {
    int first;
    int second;
    int third;
    int sourceFirst;
    int sourceSecond;
    Object *object;
    bool enabled;
    bool changed;

    S(int a, int b, int c, const Source &source, bool flag);
};

S::S(int a, int b, int c, const Source &source, bool flag)
    : first(a),
      second(b),
      third(c),
      sourceFirst(source.first),
      sourceSecond(source.second)
{
    Object *p = source.object;
    object = p ? p->clone() : 0;
    enabled = flag;
    changed = false;
}
