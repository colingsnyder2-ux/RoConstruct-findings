// from server: 78% by colin
// roc 2007-08 00673760  unit: CXTPCustomizeSheet  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00673760
//
// 00673760  8b89b8000000         mov ecx, dword ptr [ecx + 0xb8]
// 00673766  57                   push edi
// 00673767  8b7958               mov edi, dword ptr [ecx + 0x58]
// 0067376a  85ff                 test edi, edi
// 0067376c  742a                 je 0x673798
// 0067376e  56                   push esi
// 0067376f  6a00                 push 0
// 00673771  e86af2fbff           call 0x6329e0
// 00673776  8bb7fc000000         mov esi, dword ptr [edi + 0xfc]
// 0067377c  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 00673782  8b01                 mov eax, dword ptr [ecx]
// 00673784  8b5058               mov edx, dword ptr [eax + 0x58]
// 00673787  57                   push edi
// 00673788  ffd2                 call edx
// 0067378a  8b06                 mov eax, dword ptr [esi]
// 0067378c  8b907c010000         mov edx, dword ptr [eax + 0x17c]
// 00673792  8bce                 mov ecx, esi
// 00673794  5e                   pop esi
// 00673795  5f                   pop edi
// 00673796  ffe2                 jmp edx
// 00673798  5f                   pop edi
// 00673799  c3                   ret 

struct CXTPCustomizeSheet {
    void func_00673760();
};

extern "C" void __stdcall func_006329e0(int);

void CXTPCustomizeSheet::func_00673760()
{
    int* p = *(int**)((char*)this + 0xb8);
    int* q = *(int**)((char*)p + 0x58);
    if (q != 0) {
        func_006329e0(0);
        int* r = *(int**)((char*)q + 0xfc);
        int* s = *(int**)((char*)r + 0xf8);
        void (__stdcall *f1)(int*) = *(void (__stdcall **)(int*))((char*)*(int**)s + 0x58);
        f1(q);
        void (__stdcall *f2)(int*) = *(void (__stdcall **)(int*))((char*)*(int**)r + 0x17c);
        f2(r);
    }
}
