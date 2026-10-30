// roc 2011-06 004a0be0  unit: RBX::DS::CVideoStream  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004a0be0
//
// 004a0be0  8b442404             mov eax, dword ptr [esp + 4]
// 004a0be4  8b4028               mov eax, dword ptr [eax + 0x28]
// 004a0be7  8b480c               mov ecx, dword ptr [eax + 0xc]
// 004a0bea  83c00c               add eax, 0xc
// 004a0bed  89442404             mov dword ptr [esp + 4], eax
// 004a0bf1  8b5108               mov edx, dword ptr [ecx + 8]
// 004a0bf4  ffe2                 jmp edx
// copied from an identical function in another client (function ?f@S@@QAEHPAX@Z)

// roc-cl: 30729
// roc-flags: /O2 /GS- /EHsc /MD
struct S
{
    int f(void *p);
};

int S::f(void *p)
{
    int *a = *(int **)((char *)p + 0x28);
    int *b = *(int **)((char *)a + 0xc);
    return ((int (__thiscall *)(int *, int *))(*(int **)((char *)b + 8)))((int *)((char *)b), (int *)((char *)a + 0xc));
}