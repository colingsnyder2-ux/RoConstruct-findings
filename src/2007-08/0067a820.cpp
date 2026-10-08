// from server: 85% by colin
// roc 2007-08 0067a820  unit: CXTPControls  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067a820
//
// 0067a820  8b442404             mov eax, dword ptr [esp + 4]
// 0067a824  85c0                 test eax, eax
// 0067a826  7c0d                 jl 0x67a835
// 0067a828  3b412c               cmp eax, dword ptr [ecx + 0x2c]
// 0067a82b  7d08                 jge 0x67a835
// 0067a82d  8b5128               mov edx, dword ptr [ecx + 0x28]
// 0067a830  8b0482               mov eax, dword ptr [edx + eax*4]
// 0067a833  eb02                 jmp 0x67a837
// 0067a835  33c0                 xor eax, eax
// 0067a837  8b11                 mov edx, dword ptr [ecx]
// 0067a839  89442404             mov dword ptr [esp + 4], eax
// 0067a83d  8b4258               mov eax, dword ptr [edx + 0x58]
// 0067a840  ffe0                 jmp eax

struct CXTPControls {
    int GetAt(int nIndex);
};

int CXTPControls::GetAt(int nIndex)
{
    int result;
    if (nIndex >= 0 && nIndex < *(int*)((char*)this + 0x2c))
        result = *(int*)(*(int*)((char*)this + 0x28) + nIndex * 4);
    else
        result = 0;
    int (__stdcall *fn)(int);
    fn = *(int (__stdcall **)(int))((*(int*)this) + 0x58);
    return fn(result);
}
