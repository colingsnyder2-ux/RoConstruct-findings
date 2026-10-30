// roc 2011-06 0060dc50  unit: RBX::VChangeHistoryService::?$FactoryProduct  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0060dc50
//
// 0060dc50  8b442404             mov eax, dword ptr [esp + 4]
// 0060dc54  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0060dc58  56                   push esi
// 0060dc59  8bf1                 mov esi, ecx
// 0060dc5b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0060dc5f  8906                 mov dword ptr [esi], eax
// 0060dc61  8b442414             mov eax, dword ptr [esp + 0x14]
// 0060dc65  894e04               mov dword ptr [esi + 4], ecx
// 0060dc68  895608               mov dword ptr [esi + 8], edx
// 0060dc6b  8b08                 mov ecx, dword ptr [eax]
// 0060dc6d  894e0c               mov dword ptr [esi + 0xc], ecx
// 0060dc70  8b5004               mov edx, dword ptr [eax + 4]
// 0060dc73  895610               mov dword ptr [esi + 0x10], edx
// 0060dc76  8b4008               mov eax, dword ptr [eax + 8]
// 0060dc79  85c0                 test eax, eax
// 0060dc7b  741d                 je 0x60dc9a
// 0060dc7d  8b10                 mov edx, dword ptr [eax]
// 0060dc7f  8bc8                 mov ecx, eax
// 0060dc81  8b4208               mov eax, dword ptr [edx + 8]
// 0060dc84  ffd0                 call eax
// 0060dc86  8a4c2418             mov cl, byte ptr [esp + 0x18]
// 0060dc8a  894614               mov dword ptr [esi + 0x14], eax
// 0060dc8d  884e18               mov byte ptr [esi + 0x18], cl
// 0060dc90  c6461900             mov byte ptr [esi + 0x19], 0
// 0060dc94  8bc6                 mov eax, esi
// 0060dc96  5e                   pop esi
// 0060dc97  c21400               ret 0x14
// 0060dc9a  8a4c2418             mov cl, byte ptr [esp + 0x18]
// 0060dc9e  33c0                 xor eax, eax
// 0060dca0  894614               mov dword ptr [esi + 0x14], eax
// 0060dca3  884619               mov byte ptr [esi + 0x19], al
// 0060dca6  884e18               mov byte ptr [esi + 0x18], cl
// 0060dca9  8bc6                 mov eax, esi
// 0060dcab  5e                   pop esi
// 0060dcac  c21400               ret 0x14
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