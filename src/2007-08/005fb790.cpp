// from server: 64% by colin
// roc 2007-08 005fb790  unit: RBX::WeldTool  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005fb790
//
// 005fb790  56                   push esi
// 005fb791  8b742408             mov esi, dword ptr [esp + 8]
// 005fb795  57                   push edi
// 005fb796  8bf9                 mov edi, ecx
// 005fb798  8b0e                 mov ecx, dword ptr [esi]
// 005fb79a  e8c185f7ff           call 0x573d60
// 005fb79f  8bce                 mov ecx, esi
// 005fb7a1  e87addfbff           call 0x5b9520
// 005fb7a6  6a02                 push 2
// 005fb7a8  8bce                 mov ecx, esi
// 005fb7aa  e8c1dafbff           call 0x5b9270
// 005fb7af  8b0e                 mov ecx, dword ptr [esi]
// 005fb7b1  e8ca85f7ff           call 0x573d80
// 005fb7b6  8b4718               mov eax, dword ptr [edi + 0x18]
// 005fb7b9  6a08                 push 8
// 005fb7bb  50                   push eax
// 005fb7bc  e84f63f6ff           call 0x561b10
// 005fb7c1  83c404               add esp, 4
// 005fb7c4  8bc8                 mov ecx, eax
// 005fb7c6  e84510f9ff           call 0x58c810
// 005fb7cb  5f                   pop edi
// 005fb7cc  5e                   pop esi
// 005fb7cd  c20400               ret 4

struct WeldTool {
    char pad[0x18];
    void* field18;
    void construct(void* workspace);
};

extern "C" void* __stdcall sub_561B10(void* a, int b);
extern "C" void __stdcall sub_573D60(void* a);
extern "C" void __stdcall sub_573D80(void* a);
extern "C" void __stdcall sub_58C810(void* a);
extern "C" void __stdcall sub_5B9270(void* a, int b);
extern "C" void __stdcall sub_5B9520(void* a);

void WeldTool::construct(void* workspace) {
    void* p = *(void**)workspace;
    sub_573D60(p);
    sub_5B9520(workspace);
    sub_5B9270(workspace, 2);
    p = *(void**)workspace;
    sub_573D80(p);
    void* q = sub_561B10(field18, 8);
    sub_58C810(q);
}
