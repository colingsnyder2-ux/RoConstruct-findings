// from server: 95% by colin
// roc 2007-08 0045d2c0  unit: Scintilla::CScintillaView  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045d2c0
//
// 0045d2c0  56                   push esi
// 0045d2c1  8b742408             mov esi, dword ptr [esp + 8]
// 0045d2c5  57                   push edi
// 0045d2c6  8b3e                 mov edi, dword ptr [esi]
// 0045d2c8  6a01                 push 1
// 0045d2ca  83c158               add ecx, 0x58
// 0045d2cd  e83ef8ffff           call 0x45cb10
// 0045d2d2  50                   push eax
// 0045d2d3  8b07                 mov eax, dword ptr [edi]
// 0045d2d5  8bce                 mov ecx, esi
// 0045d2d7  ffd0                 call eax
// 0045d2d9  5f                   pop edi
// 0045d2da  5e                   pop esi
// 0045d2db  c20400               ret 4

struct CScintillaView {
    void sub_45D2C0(int* p);
};

extern "C" int __stdcall sub_45CB10(int, int);

void CScintillaView::sub_45D2C0(int* p) {
    int* vtable = *(int**)p;
    int result = sub_45CB10((int)this + 0x58, 1);
    ((void (__thiscall*)(int*, int))vtable[0])(p, result);
}
