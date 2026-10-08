// from server: 68% by colin
// roc 2007-08 00403800  unit: VCWorkspace::?$CComObject  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00403800
//
// 00403800  51                   push ecx
// 00403801  8b5134               mov edx, dword ptr [ecx + 0x34]
// 00403804  8b442408             mov eax, dword ptr [esp + 8]
// 00403808  8910                 mov dword ptr [eax], edx
// 0040380a  8b4938               mov ecx, dword ptr [ecx + 0x38]
// 0040380d  85c9                 test ecx, ecx
// 0040380f  c7042400000000       mov dword ptr [esp], 0
// 00403816  894804               mov dword ptr [eax + 4], ecx
// 00403819  740c                 je 0x403827
// 0040381b  83c104               add ecx, 4
// 0040381e  ba01000000           mov edx, 1
// 00403823  f00fc111             lock xadd dword ptr [ecx], edx
// 00403827  59                   pop ecx
// 00403828  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct VCWorkspaceCComObject
{
    char pad[0x34];
    int m_field34;
    long* m_field38;

    void get(int* out);
};

void VCWorkspaceCComObject::get(int* out)
{
    out[0] = m_field34;
    long* p = m_field38;
    out[1] = (int)p;
    if (p == 0)
    {
        _InterlockedExchangeAdd(p + 1, 1);
    }
}
