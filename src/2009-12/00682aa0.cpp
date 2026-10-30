// roc 2009-12 00682aa0  unit: RBX::VChangeHistoryService::?$FactoryProduct  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00682aa0
//
// 00682aa0  8b442404             mov eax, dword ptr [esp + 4]
// 00682aa4  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00682aa8  56                   push esi
// 00682aa9  8bf1                 mov esi, ecx
// 00682aab  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00682aaf  8906                 mov dword ptr [esi], eax
// 00682ab1  8b442414             mov eax, dword ptr [esp + 0x14]
// 00682ab5  894e04               mov dword ptr [esi + 4], ecx
// 00682ab8  895608               mov dword ptr [esi + 8], edx
// 00682abb  8b08                 mov ecx, dword ptr [eax]
// 00682abd  894e0c               mov dword ptr [esi + 0xc], ecx
// 00682ac0  8b5004               mov edx, dword ptr [eax + 4]
// 00682ac3  895610               mov dword ptr [esi + 0x10], edx
// 00682ac6  8b4008               mov eax, dword ptr [eax + 8]
// 00682ac9  85c0                 test eax, eax
// 00682acb  741d                 je 0x682aea
// 00682acd  8b10                 mov edx, dword ptr [eax]
// 00682acf  8bc8                 mov ecx, eax
// 00682ad1  8b4208               mov eax, dword ptr [edx + 8]
// 00682ad4  ffd0                 call eax
// 00682ad6  8a4c2418             mov cl, byte ptr [esp + 0x18]
// 00682ada  894614               mov dword ptr [esi + 0x14], eax
// 00682add  884e18               mov byte ptr [esi + 0x18], cl
// 00682ae0  c6461900             mov byte ptr [esi + 0x19], 0
// 00682ae4  8bc6                 mov eax, esi
// 00682ae6  5e                   pop esi
// 00682ae7  c21400               ret 0x14
// 00682aea  8a4c2418             mov cl, byte ptr [esp + 0x18]
// 00682aee  33c0                 xor eax, eax
// 00682af0  894614               mov dword ptr [esi + 0x14], eax
// 00682af3  884619               mov byte ptr [esi + 0x19], al
// 00682af6  884e18               mov byte ptr [esi + 0x18], cl
// 00682af9  8bc6                 mov eax, esi
// 00682afb  5e                   pop esi
// 00682afc  c21400               ret 0x14
// copied from an identical function in another client (function ??0S@ns_ROCX00001f@@QAE@HHHABUSource@1@_N@Z)

namespace ns_ROCX00001f {
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
}
