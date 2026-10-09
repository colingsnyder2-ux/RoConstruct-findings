// from server: 65% by colin
// roc 2007-08 00563450  unit: RBX::CameraZoomExtentsCommand  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00563450
//
// 00563450  56                   push esi
// 00563451  8bf1                 mov esi, ecx
// 00563453  8b460c               mov eax, dword ptr [esi + 0xc]
// 00563456  8d906c020000         lea edx, [eax + 0x26c]
// 0056345c  8d8828020000         lea ecx, [eax + 0x228]
// 00563462  8b01                 mov eax, dword ptr [ecx]
// 00563464  52                   push edx
// 00563465  8b5004               mov edx, dword ptr [eax + 4]
// 00563468  ffd2                 call edx
// 0056346a  8bc8                 mov ecx, eax
// 0056346c  e87f8b0300           call 0x59bff0
// 00563471  8b460c               mov eax, dword ptr [esi + 0xc]
// 00563474  6a0b                 push 0xb
// 00563476  50                   push eax
// 00563477  e894e6ffff           call 0x561b10
// 0056347c  83c404               add esp, 4
// 0056347f  8bc8                 mov ecx, eax
// 00563481  e88a930200           call 0x58c810
// 00563486  8b742408             mov esi, dword ptr [esp + 8]
// 0056348a  6aff                 push -1
// 0056348c  8bce                 mov ecx, esi
// 0056348e  e81dd4eaff           call 0x4108b0
// 00563493  8b16                 mov edx, dword ptr [esi]
// 00563495  8b4204               mov eax, dword ptr [edx + 4]
// 00563498  6a01                 push 1
// 0056349a  8bce                 mov ecx, esi
// 0056349c  c74604ffffffff       mov dword ptr [esi + 4], 0xffffffff
// 005634a3  ffd0                 call eax
// 005634a5  5e                   pop esi
// 005634a6  c20400               ret 4

struct CameraZoomExtentsCommand {
    char pad[0xc];
    void* workspace;
    void doIt(void* dataState);
};

extern "C" void __stdcall sub_59BFF0(void*);
extern "C" void* __stdcall sub_561B10(void*, int);
extern "C" void __stdcall sub_58C810(void*);
extern "C" void __stdcall sub_4108B0(void*, int);

void CameraZoomExtentsCommand::doIt(void* dataState)
{
    void* ws = workspace;
    void* p1 = (void*)((char*)ws + 0x228);
    void* p2 = (void*)((char*)ws + 0x26c);
    void** vt = *(void***)p1;
    void* (*fn)(void*, void*) = (void* (*)(void*, void*))vt[1];
    void* r = fn(p1, p2);
    sub_59BFF0(r);
    void* r2 = sub_561B10(workspace, 0xb);
    sub_58C810(r2);
    sub_4108B0(dataState, -1);
    void** vt2 = *(void***)dataState;
    void (*fn2)(void*, int) = (void (*)(void*, int))vt2[1];
    *(int*)((char*)dataState + 4) = -1;
    fn2(dataState, 1);
}
