// from server: 65% by colin
// roc 2007-08 00636470  unit: CXTPControlComboBox  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00636470
//
// 00636470  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00636474  53                   push ebx
// 00636475  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00636479  56                   push esi
// 0063647a  57                   push edi
// 0063647b  8bf1                 mov esi, ecx
// 0063647d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00636481  8b3e                 mov edi, dword ptr [esi]
// 00636483  50                   push eax
// 00636484  51                   push ecx
// 00636485  8bcb                 mov ecx, ebx
// 00636487  ff15c8dc7700         call dword ptr [0x77dcc8]
// 0063648d  50                   push eax
// 0063648e  8bcb                 mov ecx, ebx
// 00636490  ff1598dd7700         call dword ptr [0x77dd98]
// 00636496  8b5770               mov edx, dword ptr [edi + 0x70]
// 00636499  50                   push eax
// 0063649a  8bce                 mov ecx, esi
// 0063649c  ffd2                 call edx
// 0063649e  5f                   pop edi
// 0063649f  5e                   pop esi
// 006364a0  5b                   pop ebx
// 006364a1  c20c00               ret 0xc

struct CXTPControlComboBox {
    void m(int a, int b, int c);
};

extern "C" void* __stdcall func_77dcc8(void*, int);
extern "C" void* __stdcall func_77dd98(void*, void*);

void CXTPControlComboBox::m(int a, int b, int c)
{
    void* p = func_77dcc8((void*)b, c);
    void* q = func_77dd98((void*)b, p);
    void (*fn)(void*, void*) = *(void (**)(void*, void*))((char*)*(void**)this + 0x70);
    fn(this, q);
}
