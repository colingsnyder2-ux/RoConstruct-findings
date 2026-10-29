// roc 2011-06 004a32b0  unit: CSourceStream  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004a32b0
//
// 004a32b0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004a32b4  85c9                 test ecx, ecx
// 004a32b6  7508                 jne 0x4a32c0
// 004a32b8  b803400080           mov eax, 0x80004003
// 004a32bd  c20800               ret 8
// 004a32c0  8b442404             mov eax, dword ptr [esp + 4]
// 004a32c4  8901                 mov dword ptr [ecx], eax
// 004a32c6  8b08                 mov ecx, dword ptr [eax]
// 004a32c8  8b5104               mov edx, dword ptr [ecx + 4]
// 004a32cb  50                   push eax
// 004a32cc  ffd2                 call edx
// 004a32ce  33c0                 xor eax, eax
// 004a32d0  c20800               ret 8
// copied from an identical function in another client (function ?f@S_func_004b91b0@@QAEHHH@Z)

// roc-cl: 30729
// roc-flags: /O2 /GS- /EHsc /MD
struct S_func_004b91b0 {
    int f(int a1, int a2);
};

int S_func_004b91b0::f(int a1, int a2)
{
    if (a2 == 0)
        return (int)0x80004003;
    *(int*)a2 = a1;
    int* p = (int*)a1;
    int* vt = (int*)*p;
    typedef int (__stdcall *Fn)(int);
    Fn fn = (Fn)vt[1];
    fn(a1);
    return 0;
}