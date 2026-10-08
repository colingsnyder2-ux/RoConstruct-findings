// from server: 58% by colin
// roc 2007-08 0042f710  unit: CPatchedControlComboBox  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042f710
//
// 0042f710  51                   push ecx
// 0042f711  8b0d3cae8b00         mov ecx, dword ptr [0x8bae3c]
// 0042f717  8b442408             mov eax, dword ptr [esp + 8]
// 0042f71b  8908                 mov dword ptr [eax], ecx
// 0042f71d  8b1540ae8b00         mov edx, dword ptr [0x8bae40]
// 0042f723  8bca                 mov ecx, edx
// 0042f725  85c9                 test ecx, ecx
// 0042f727  c7042400000000       mov dword ptr [esp], 0
// 0042f72e  895004               mov dword ptr [eax + 4], edx
// 0042f731  740c                 je 0x42f73f
// 0042f733  83c104               add ecx, 4
// 0042f736  ba01000000           mov edx, 1
// 0042f73b  f00fc111             lock xadd dword ptr [ecx], edx
// 0042f73f  59                   pop ecx
// 0042f740  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct CPatchedControlComboBox
{
    void getSomething(void** out);
};

extern void* g_008bae3c;
extern void* g_008bae40;

void CPatchedControlComboBox::getSomething(void** out)
{
    *out = g_008bae3c;
    void* p = g_008bae40;
    out[1] = p;
    if (p == 0)
    {
        _InterlockedExchangeAdd((volatile long*)((char*)p + 4), 1);
    }
}
