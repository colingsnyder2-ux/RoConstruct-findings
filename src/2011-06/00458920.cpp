// roc 2011-06 00458920  unit: RBX::Stats::H::?$TypedStatsItem  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00458920
//
// 00458920  51                   push ecx
// 00458921  8bc1                 mov eax, ecx
// 00458923  8b08                 mov ecx, dword ptr [eax]
// 00458925  8b4004               mov eax, dword ptr [eax + 4]
// 00458928  8b11                 mov edx, dword ptr [ecx]
// 0045892a  8b521c               mov edx, dword ptr [edx + 0x1c]
// 0045892d  56                   push esi
// 0045892e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00458932  50                   push eax
// 00458933  56                   push esi
// 00458934  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0045893c  ffd2                 call edx
// 0045893e  8bc6                 mov eax, esi
// 00458940  5e                   pop esi
// 00458941  59                   pop ecx
// 00458942  c20400               ret 4
// copied from an identical function in another client (function ?get@S@ns_ROCX000001@@QAE?AUResult@2@XZ)

namespace ns_ROCX000001 {
struct Result {
    Result(const Result&);
    ~Result();
    int value;
};

struct Interface {
    virtual void f0() = 0;
    virtual void f1() = 0;
    virtual void f2() = 0;
    virtual void f3() = 0;
    virtual void f4() = 0;
    virtual void f5() = 0;
    virtual void f6() = 0;
    virtual Result get(int) = 0;
};

struct S {
    Interface* object;
    int argument;
    Result get();
};

Result S::get() {
    return object->get(argument);
}
}
