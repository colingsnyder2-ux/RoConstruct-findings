// from server: 66% by colin
// roc 2007-08 005fb810  unit: RBX::InletTool  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005fb810
//
// 005fb810  56                   push esi
// 005fb811  8b742408             mov esi, dword ptr [esp + 8]
// 005fb815  57                   push edi
// 005fb816  8bf9                 mov edi, ecx
// 005fb818  8b0e                 mov ecx, dword ptr [esi]
// 005fb81a  e84185f7ff           call 0x573d60
// 005fb81f  8bce                 mov ecx, esi
// 005fb821  e8fadcfbff           call 0x5b9520
// 005fb826  6a04                 push 4
// 005fb828  8bce                 mov ecx, esi
// 005fb82a  e841dafbff           call 0x5b9270
// 005fb82f  8b0e                 mov ecx, dword ptr [esi]
// 005fb831  e84a85f7ff           call 0x573d80
// 005fb836  8b4718               mov eax, dword ptr [edi + 0x18]
// 005fb839  6a08                 push 8
// 005fb83b  50                   push eax
// 005fb83c  e8cf62f6ff           call 0x561b10
// 005fb841  83c404               add esp, 4
// 005fb844  8bc8                 mov ecx, eax
// 005fb846  e8c50ff9ff           call 0x58c810
// 005fb84b  5f                   pop edi
// 005fb84c  5e                   pop esi
// 005fb84d  c20400               ret 4

struct InletTool {
    void construct(void*);
};

extern void func_00573d60(void*);
extern void func_005b9520(void*);
extern void func_005b9270(void*, int);
extern void func_00573d80(void*);
extern void* func_00561b10(void*, int);
extern void func_0058c810(void*);

void InletTool::construct(void* arg)
{
    void* p = *(void**)arg;
    func_00573d60(p);
    func_005b9520(arg);
    func_005b9270(arg, 4);
    func_00573d80(*(void**)arg);
    void* r = func_00561b10(*(void**)((char*)this + 0x18), 8);
    func_0058c810(r);
}
