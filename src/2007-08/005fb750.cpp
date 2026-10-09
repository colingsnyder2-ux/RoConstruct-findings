// from server: 87% by colin
// roc 2007-08 005fb750  unit: RBX::GlueTool  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005fb750
//
// 005fb750  56                   push esi
// 005fb751  8b742408             mov esi, dword ptr [esp + 8]
// 005fb755  57                   push edi
// 005fb756  8bf9                 mov edi, ecx
// 005fb758  8b0e                 mov ecx, dword ptr [esi]
// 005fb75a  e80186f7ff           call 0x573d60
// 005fb75f  8bce                 mov ecx, esi
// 005fb761  e8baddfbff           call 0x5b9520
// 005fb766  6a01                 push 1
// 005fb768  8bce                 mov ecx, esi
// 005fb76a  e801dbfbff           call 0x5b9270
// 005fb76f  8b0e                 mov ecx, dword ptr [esi]
// 005fb771  e80a86f7ff           call 0x573d80
// 005fb776  8b4718               mov eax, dword ptr [edi + 0x18]
// 005fb779  6a08                 push 8
// 005fb77b  50                   push eax
// 005fb77c  e88f63f6ff           call 0x561b10
// 005fb781  83c404               add esp, 4
// 005fb784  8bc8                 mov ecx, eax
// 005fb786  e88510f9ff           call 0x58c810
// 005fb78b  5f                   pop edi
// 005fb78c  5e                   pop esi
// 005fb78d  c20400               ret 4

struct MouseCommand {
    void sub_573D60();
    void sub_573D80();
};

struct SurfaceTool {
    void sub_5B9520();
    void sub_5B9270(int);
};

struct GlueTool {
    char pad[0x18];
    void* field_18;
    void construct(MouseCommand* cmd);
};

extern "C" void* __stdcall sub_561B10(void* p, int n);
extern "C" void __stdcall sub_58C810(void* p);

void GlueTool::construct(MouseCommand* cmd)
{
    MouseCommand* m = *(MouseCommand**)cmd;
    m->sub_573D60();
    ((SurfaceTool*)cmd)->sub_5B9520();
    ((SurfaceTool*)cmd)->sub_5B9270(1);
    MouseCommand* m2 = *(MouseCommand**)cmd;
    m2->sub_573D80();
    void* p = sub_561B10(field_18, 8);
    sub_58C810(p);
}
