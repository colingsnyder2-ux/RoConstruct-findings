// from server: 56% by colin
// roc 2007-08 00625830  unit: RBX::PartDragTool  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00625830
//
// 00625830  51                   push ecx
// 00625831  8b11                 mov edx, dword ptr [ecx]
// 00625833  8b442408             mov eax, dword ptr [esp + 8]
// 00625837  8910                 mov dword ptr [eax], edx
// 00625839  8b4904               mov ecx, dword ptr [ecx + 4]
// 0062583c  85c9                 test ecx, ecx
// 0062583e  c7042400000000       mov dword ptr [esp], 0
// 00625845  894804               mov dword ptr [eax + 4], ecx
// 00625848  740c                 je 0x625856
// 0062584a  83c108               add ecx, 8
// 0062584d  ba01000000           mov edx, 1
// 00625852  f00fc111             lock xadd dword ptr [ecx], edx
// 00625856  59                   pop ecx
// 00625857  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct PartDragTool {
    void* field0;
    void* field4;
    void copyTo(PartDragTool* dest);
};

void PartDragTool::copyTo(PartDragTool* dest) {
    dest->field0 = this->field0;
    void* p = this->field4;
    dest->field4 = p;
    if (p) {
        _InterlockedExchangeAdd((volatile long*)((char*)p + 8), 1);
    }
}
