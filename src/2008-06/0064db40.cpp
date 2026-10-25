// from server: 100% by king_originala
// roc 2008-06 0064db40  unit: RBX::SimJobStage  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064db40
//
// 0064db40  807c240800           cmp byte ptr [esp + 8], 0
// 0064db45  8b09                 mov ecx, dword ptr [ecx]
// 0064db47  51                   push ecx
// 0064db48  7417                 je 0x64db61
// 0064db4a  807c240800           cmp byte ptr [esp + 8], 0
// 0064db4f  7408                 je 0x64db59
// 0064db51  e85aa01500           call 0x7a7bb0
// 0064db56  c20800               ret 8
// 0064db59  e8d2a51500           call 0x7a8130
// 0064db5e  c20800               ret 8
// 0064db61  807c240800           cmp byte ptr [esp + 8], 0
// 0064db66  7408                 je 0x64db70
// 0064db68  e853911500           call 0x7a6cc0
// 0064db6d  c20800               ret 8
// 0064db70  e8ebbd1500           call 0x7a9960
// 0064db75  c20800               ret 8

struct seg_00720000;
struct S;

extern "C" int __stdcall func_007a6cc0(void*);
extern "C" int __stdcall func_007a7bb0(void*);
extern "C" int __stdcall func_0072d180(seg_00720000*);
extern "C" int __stdcall sub_72e9b0(S*);

struct StreamOwner {
    void* stream;
    int finish(bool reset, bool compress);
};

int StreamOwner::finish(bool reset, bool compress)
{
    void* p = stream;
    if (compress) {
        if (reset)
            return func_007a7bb0(p);
        return func_0072d180(static_cast<seg_00720000*>(p));
    }

    if (reset)
        return func_007a6cc0(p);
    return sub_72e9b0(static_cast<S*>(p));
}
