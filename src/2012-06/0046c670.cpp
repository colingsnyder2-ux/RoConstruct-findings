// roc 2012-06 0046c670  unit: RBX::TeleportCallback  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0046c670
//
// 0046c670  51                   push ecx
// 0046c671  8bc1                 mov eax, ecx
// 0046c673  8b08                 mov ecx, dword ptr [eax]
// 0046c675  8b4004               mov eax, dword ptr [eax + 4]
// 0046c678  8b11                 mov edx, dword ptr [ecx]
// 0046c67a  8b521c               mov edx, dword ptr [edx + 0x1c]
// 0046c67d  56                   push esi
// 0046c67e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0046c682  50                   push eax
// 0046c683  56                   push esi
// 0046c684  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0046c68c  ffd2                 call edx
// 0046c68e  8bc6                 mov eax, esi
// 0046c690  5e                   pop esi
// 0046c691  59                   pop ecx
// 0046c692  c20400               ret 4
// copied from an identical function in another client (function ?get@S@@QAE?AUResult@@XZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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