// from server: 87% by colin
// roc 2007-08 0041f7e0  unit: CSelectionTreeCtrl  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041f7e0
//
// 0041f7e0  8b442404             mov eax, dword ptr [esp + 4]
// 0041f7e4  8b485c               mov ecx, dword ptr [eax + 0x5c]
// 0041f7e7  8b11                 mov edx, dword ptr [ecx]
// 0041f7e9  8b400c               mov eax, dword ptr [eax + 0xc]
// 0041f7ec  8b5210               mov edx, dword ptr [edx + 0x10]
// 0041f7ef  50                   push eax
// 0041f7f0  ffd2                 call edx
// 0041f7f2  8b442408             mov eax, dword ptr [esp + 8]
// 0041f7f6  c70000000000         mov dword ptr [eax], 0
// 0041f7fc  c20800               ret 8

struct CSelectionTreeCtrl
{
    void func_0041f7e0(int* arg1, int* arg2);
};

void CSelectionTreeCtrl::func_0041f7e0(int* arg1, int* arg2)
{
    int* p = *(int**)((char*)arg1 + 0x5c);
    int v = *(int*)((char*)arg1 + 0xc);
    (*(void (__stdcall**)(int))(*p + 0x10))(v);
    *arg2 = 0;
}
