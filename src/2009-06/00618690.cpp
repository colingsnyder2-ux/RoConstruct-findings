// roc 2009-06 00618690  unit: RBX::VChangeHistoryService::?$FactoryProduct  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00618690
//
// 00618690  8b442404             mov eax, dword ptr [esp + 4]
// 00618694  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00618698  56                   push esi
// 00618699  8bf1                 mov esi, ecx
// 0061869b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0061869f  8906                 mov dword ptr [esi], eax
// 006186a1  8b442414             mov eax, dword ptr [esp + 0x14]
// 006186a5  894e04               mov dword ptr [esi + 4], ecx
// 006186a8  895608               mov dword ptr [esi + 8], edx
// 006186ab  8b08                 mov ecx, dword ptr [eax]
// 006186ad  894e0c               mov dword ptr [esi + 0xc], ecx
// 006186b0  8b5004               mov edx, dword ptr [eax + 4]
// 006186b3  895610               mov dword ptr [esi + 0x10], edx
// 006186b6  8b4008               mov eax, dword ptr [eax + 8]
// 006186b9  85c0                 test eax, eax
// 006186bb  741d                 je 0x6186da
// 006186bd  8b10                 mov edx, dword ptr [eax]
// 006186bf  8bc8                 mov ecx, eax
// 006186c1  8b4208               mov eax, dword ptr [edx + 8]
// 006186c4  ffd0                 call eax
// 006186c6  8a4c2418             mov cl, byte ptr [esp + 0x18]
// 006186ca  894614               mov dword ptr [esi + 0x14], eax
// 006186cd  884e18               mov byte ptr [esi + 0x18], cl
// 006186d0  c6461900             mov byte ptr [esi + 0x19], 0
// 006186d4  8bc6                 mov eax, esi
// 006186d6  5e                   pop esi
// 006186d7  c21400               ret 0x14
// 006186da  8a4c2418             mov cl, byte ptr [esp + 0x18]
// 006186de  33c0                 xor eax, eax
// 006186e0  894614               mov dword ptr [esi + 0x14], eax
// 006186e3  884619               mov byte ptr [esi + 0x19], al
// 006186e6  884e18               mov byte ptr [esi + 0x18], cl
// 006186e9  8bc6                 mov eax, esi
// 006186eb  5e                   pop esi
// 006186ec  c21400               ret 0x14
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