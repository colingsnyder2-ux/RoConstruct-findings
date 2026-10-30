// roc 2010-06 005e9b50  unit: RBX::VChangeHistoryService::?$FactoryProduct  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005e9b50
//
// 005e9b50  8b442404             mov eax, dword ptr [esp + 4]
// 005e9b54  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005e9b58  56                   push esi
// 005e9b59  8bf1                 mov esi, ecx
// 005e9b5b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005e9b5f  8906                 mov dword ptr [esi], eax
// 005e9b61  8b442414             mov eax, dword ptr [esp + 0x14]
// 005e9b65  894e04               mov dword ptr [esi + 4], ecx
// 005e9b68  895608               mov dword ptr [esi + 8], edx
// 005e9b6b  8b08                 mov ecx, dword ptr [eax]
// 005e9b6d  894e0c               mov dword ptr [esi + 0xc], ecx
// 005e9b70  8b5004               mov edx, dword ptr [eax + 4]
// 005e9b73  895610               mov dword ptr [esi + 0x10], edx
// 005e9b76  8b4008               mov eax, dword ptr [eax + 8]
// 005e9b79  85c0                 test eax, eax
// 005e9b7b  741d                 je 0x5e9b9a
// 005e9b7d  8b10                 mov edx, dword ptr [eax]
// 005e9b7f  8bc8                 mov ecx, eax
// 005e9b81  8b4208               mov eax, dword ptr [edx + 8]
// 005e9b84  ffd0                 call eax
// 005e9b86  8a4c2418             mov cl, byte ptr [esp + 0x18]
// 005e9b8a  894614               mov dword ptr [esi + 0x14], eax
// 005e9b8d  884e18               mov byte ptr [esi + 0x18], cl
// 005e9b90  c6461900             mov byte ptr [esi + 0x19], 0
// 005e9b94  8bc6                 mov eax, esi
// 005e9b96  5e                   pop esi
// 005e9b97  c21400               ret 0x14
// 005e9b9a  8a4c2418             mov cl, byte ptr [esp + 0x18]
// 005e9b9e  33c0                 xor eax, eax
// 005e9ba0  894614               mov dword ptr [esi + 0x14], eax
// 005e9ba3  884619               mov byte ptr [esi + 0x19], al
// 005e9ba6  884e18               mov byte ptr [esi + 0x18], cl
// 005e9ba9  8bc6                 mov eax, esi
// 005e9bab  5e                   pop esi
// 005e9bac  c21400               ret 0x14
// copied from an identical function in another client (function ??0S@@QAE@HHHABUSource@@_N@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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