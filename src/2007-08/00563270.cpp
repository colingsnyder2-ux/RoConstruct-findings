// from server: 73% by colin
// roc 2007-08 00563270  unit: RBX::CameraPanRightCommand  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00563270
//
// 00563270  56                   push esi
// 00563271  8bf1                 mov esi, ecx
// 00563273  8b460c               mov eax, dword ptr [esi + 0xc]
// 00563276  8d8828020000         lea ecx, [eax + 0x228]
// 0056327c  8b01                 mov eax, dword ptr [ecx]
// 0056327e  8b5004               mov edx, dword ptr [eax + 4]
// 00563281  6a01                 push 1
// 00563283  ffd2                 call edx
// 00563285  8bc8                 mov ecx, eax
// 00563287  e8246c0300           call 0x599eb0
// 0056328c  8b460c               mov eax, dword ptr [esi + 0xc]
// 0056328f  6a0b                 push 0xb
// 00563291  50                   push eax
// 00563292  e879e8ffff           call 0x561b10
// 00563297  83c404               add esp, 4
// 0056329a  8bc8                 mov ecx, eax
// 0056329c  e86f950200           call 0x58c810
// 005632a1  8b742408             mov esi, dword ptr [esp + 8]
// 005632a5  6aff                 push -1
// 005632a7  8bce                 mov ecx, esi
// 005632a9  e802d6eaff           call 0x4108b0
// 005632ae  8b16                 mov edx, dword ptr [esi]
// 005632b0  8b4204               mov eax, dword ptr [edx + 4]
// 005632b3  6a01                 push 1
// 005632b5  8bce                 mov ecx, esi
// 005632b7  c74604ffffffff       mov dword ptr [esi + 4], 0xffffffff
// 005632be  ffd0                 call eax
// 005632c0  5e                   pop esi
// 005632c1  c20400               ret 4

struct CameraPanRightCommand {
    char pad[0xc];
    void* workspace;
    void doIt(void* dataState);
};

extern "C" void __stdcall sub_00599EB0(void*);
extern "C" void* __stdcall sub_00561B10(void*, int);
extern "C" void __stdcall sub_0058C810(void*);
extern "C" void __stdcall sub_004108B0(void*, int);

void CameraPanRightCommand::doIt(void* dataState)
{
    void* p = *(void**)((char*)workspace + 0x228);
    void* (*fn)(void*, int) = *(void* (**)(void*, int))((char*)p + 4);
    void* r = fn(p, 1);
    sub_00599EB0(r);

    void* q = sub_00561B10(workspace, 0xb);
    sub_0058C810(q);

    sub_004108B0(dataState, -1);
    void** vt = *(void***)dataState;
    void (*fn2)(void*, int) = (void (*)(void*, int))vt[1];
    *(int*)((char*)dataState + 4) = -1;
    fn2(dataState, 1);
}
