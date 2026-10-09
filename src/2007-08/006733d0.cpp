// from server: 61% by colin
// roc 2007-08 006733d0  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006733d0
//
// 006733d0  53                   push ebx
// 006733d1  56                   push esi
// 006733d2  57                   push edi
// 006733d3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006733d7  57                   push edi
// 006733d8  e841530c00           call 0x73871e
// 006733dd  e82efc0300           call 0x6b3010
// 006733e2  8bd8                 mov ebx, eax
// 006733e4  8b33                 mov esi, dword ptr [ebx]
// 006733e6  8bcf                 mov ecx, edi
// 006733e8  83c618               add esi, 0x18
// 006733eb  e828530c00           call 0x738718
// 006733f0  8b400c               mov eax, dword ptr [eax + 0xc]
// 006733f3  8b16                 mov edx, dword ptr [esi]
// 006733f5  50                   push eax
// 006733f6  8bcb                 mov ecx, ebx
// 006733f8  ffd2                 call edx
// 006733fa  8bf0                 mov esi, eax
// 006733fc  85f6                 test esi, esi
// 006733fe  7417                 je 0x673417
// 00673400  8bcf                 mov ecx, edi
// 00673402  e811530c00           call 0x738718
// 00673407  8bcf                 mov ecx, edi
// 00673409  89700c               mov dword ptr [eax + 0xc], esi
// 0067340c  e807530c00           call 0x738718
// 00673411  83c004               add eax, 4
// 00673414  830801               or dword ptr [eax], 1
// 00673417  5f                   pop edi
// 00673418  5e                   pop esi
// 00673419  5b                   pop ebx
// 0067341a  c20400               ret 4

struct CXTPCustomizeSheet_CCustomizeEdit {
    void func_006733d0(int);
};

extern void func_0073871e(int);
extern void* func_006b3010();
extern void* func_00738718();

void CXTPCustomizeSheet_CCustomizeEdit::func_006733d0(int arg)
{
    func_0073871e(arg);
    void* p = func_006b3010();
    int* vtable = *(int**)p;
    int* slot = (int*)((char*)vtable + 0x18);
    void* q = func_00738718();
    int val = *(int*)((char*)q + 0xc);
    int (*fn)(void*, int) = (int (*)(void*, int))*(void**)slot;
    int result = fn(p, val);
    if (result != 0) {
        void* r = func_00738718();
        *(int*)((char*)r + 0xc) = result;
        void* s = func_00738718();
        *(int*)((char*)s + 4) |= 1;
    }
}
