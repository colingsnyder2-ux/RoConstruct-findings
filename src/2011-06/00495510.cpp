// from server: 100% by tester
// roc 2011-06 00495510  unit: DxUserInput  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00495510
//
// 00495510  56                   push esi
// 00495511  8bf1                 mov esi, ecx
// 00495513  807e0800             cmp byte ptr [esi + 8], 0
// 00495517  740e                 je 0x495527
// 00495519  8b4604               mov eax, dword ptr [esi + 4]
// 0049551c  50                   push eax
// 0049551d  ff158003a400         call dword ptr [0xa40380]
// 00495523  c6460800             mov byte ptr [esi + 8], 0
// 00495527  5e                   pop esi
// 00495528  c3                   ret 

typedef struct _CRITICAL_SECTION CRITICAL_SECTION;

extern "C" void __declspec(dllimport) __stdcall LeaveCriticalSection(CRITICAL_SECTION *);

struct DxUserInput
{
    void *field0;
    CRITICAL_SECTION *field4;
    unsigned char field8;

    void f();
};

void DxUserInput::f()
{
    if (field8)
    {
        LeaveCriticalSection(field4);
        field8 = 0;
    }
}
