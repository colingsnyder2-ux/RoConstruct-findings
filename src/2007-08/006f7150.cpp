// from server: 92% by colin
// roc 2007-08 006f7150  unit: CXTPPropertyGridInplaceEdit  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f7150
//
// 006f7150  56                   push esi
// 006f7151  57                   push edi
// 006f7152  8bf9                 mov edi, ecx
// 006f7154  8b4708               mov eax, dword ptr [edi + 8]
// 006f7157  33f6                 xor esi, esi
// 006f7159  85c0                 test eax, eax
// 006f715b  7e20                 jle 0x6f717d
// 006f715d  8d4900               lea ecx, [ecx]
// 006f7160  85f6                 test esi, esi
// 006f7162  7c27                 jl 0x6f718b
// 006f7164  3bf0                 cmp esi, eax
// 006f7166  7d23                 jge 0x6f718b
// 006f7168  8b4704               mov eax, dword ptr [edi + 4]
// 006f716b  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 006f716e  e87190f3ff           call 0x6301e4
// 006f7173  8b4708               mov eax, dword ptr [edi + 8]
// 006f7176  83c601               add esi, 1
// 006f7179  3bf0                 cmp esi, eax
// 006f717b  7ce3                 jl 0x6f7160
// 006f717d  6aff                 push -1
// 006f717f  6a00                 push 0
// 006f7181  8bcf                 mov ecx, edi
// 006f7183  e828890000           call 0x6ffab0
// 006f7188  5f                   pop edi
// 006f7189  5e                   pop esi
// 006f718a  c3                   ret 
// 006f718b  e9908df3ff           jmp 0x62ff20

struct CXTPPropertyGridInplaceEdit {
    char pad0[4];
    void** items;
    int count;
    void RemoveAll();
};

void CXTPPropertyGridInplaceEdit::RemoveAll() {
    int i = 0;
    while (i < count) {
        if (i < 0 || i >= count) {
            extern void __cdecl out_of_range();
            out_of_range();
            return;
        }
        void* p = items[i];
        extern void __fastcall destroy(void*);
        destroy(p);
        i++;
    }
    extern void __fastcall finalize(CXTPPropertyGridInplaceEdit*, int, int);
    finalize(this, 0, -1);
}
