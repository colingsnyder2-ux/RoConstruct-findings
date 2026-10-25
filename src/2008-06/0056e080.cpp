// from server: 100% by colin
// roc 2008-06 0056e080  unit: G3D::VColor3::?$holder  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056e080
//
// 0056e080  51                   push ecx
// 0056e081  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0056e085  8b02                 mov eax, dword ptr [edx]
// 0056e087  c7042400000000       mov dword ptr [esp], 0
// 0056e08e  85c0                 test eax, eax
// 0056e090  7405                 je 0x56e097
// 0056e092  8d4814               lea ecx, [eax + 0x14]
// 0056e095  eb02                 jmp 0x56e099
// 0056e097  33c9                 xor ecx, ecx
// 0056e099  8b442408             mov eax, dword ptr [esp + 8]
// 0056e09d  8908                 mov dword ptr [eax], ecx
// 0056e09f  8b4a04               mov ecx, dword ptr [edx + 4]
// 0056e0a2  894804               mov dword ptr [eax + 4], ecx
// 0056e0a5  85c9                 test ecx, ecx
// 0056e0a7  740c                 je 0x56e0b5
// 0056e0a9  83c104               add ecx, 4
// 0056e0ac  ba01000000           mov edx, 1
// 0056e0b1  f00fc111             lock xadd dword ptr [ecx], edx
// 0056e0b5  59                   pop ecx
// 0056e0b6  c3                   ret 

extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    long unused;
    volatile long references;
};

struct Holder {
    char* pointer;
    Control* control;
};

Holder* __cdecl convert(Holder* result, const Holder& source)
{
    volatile int state = 0;
    char* p = source.pointer;
    result->pointer = p ? p + 20 : 0;
    result->control = source.control;
    if (result->control)
        _InterlockedIncrement(&result->control->references);
    return result;
}
