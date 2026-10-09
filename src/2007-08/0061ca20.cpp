// from server: 61% by colin
// roc 2007-08 0061ca20  unit: RBX::ChatOutput  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0061ca20
//
// 0061ca20  83ec20               sub esp, 0x20
// 0061ca23  56                   push esi
// 0061ca24  8b742428             mov esi, dword ptr [esp + 0x28]
// 0061ca28  8d442404             lea eax, [esp + 4]
// 0061ca2c  50                   push eax
// 0061ca2d  8bce                 mov ecx, esi
// 0061ca2f  ff15e0e57700         call dword ptr [0x77e5e0]
// 0061ca35  8d4c240c             lea ecx, [esp + 0xc]
// 0061ca39  51                   push ecx
// 0061ca3a  8bce                 mov ecx, esi
// 0061ca3c  ff15e4e57700         call dword ptr [0x77e5e4]
// 0061ca42  8d542414             lea edx, [esp + 0x14]
// 0061ca46  52                   push edx
// 0061ca47  8bce                 mov ecx, esi
// 0061ca49  ff15e0e57700         call dword ptr [0x77e5e0]
// 0061ca4f  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0061ca53  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0061ca57  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0061ca5b  50                   push eax
// 0061ca5c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0061ca60  51                   push ecx
// 0061ca61  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0061ca65  52                   push edx
// 0061ca66  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0061ca6a  50                   push eax
// 0061ca6b  8b442428             mov eax, dword ptr [esp + 0x28]
// 0061ca6f  51                   push ecx
// 0061ca70  52                   push edx
// 0061ca71  50                   push eax
// 0061ca72  8d4c2438             lea ecx, [esp + 0x38]
// 0061ca76  51                   push ecx
// 0061ca77  e864fcffff           call 0x61c6e0
// 0061ca7c  83c420               add esp, 0x20
// 0061ca7f  5e                   pop esi
// 0061ca80  83c420               add esp, 0x20
// 0061ca83  c3                   ret 

struct ChatOutput {
    void renderBubbles();
};

extern "C" void* __stdcall begin(void*);
extern "C" void* __stdcall end(void*);
extern "C" void __cdecl helper(void*, void*, void*, void*, void*, void*, void*, void*);

void ChatOutput::renderBubbles()
{
    char buf[32];
    void* a;
    void* b;
    void* c;
    begin(&a);
    end(&b);
    begin(&c);
    helper(&buf[0], a, b, c, &buf[0], &buf[0], &buf[0], &buf[0]);
}
