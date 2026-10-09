// from server: 65% by colin
// roc 2007-08 0062b320  unit: RBX::GroupDragTool  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0062b320
//
// 0062b320  56                   push esi
// 0062b321  8b742408             mov esi, dword ptr [esp + 8]
// 0062b325  57                   push edi
// 0062b326  8bce                 mov ecx, esi
// 0062b328  e8139af8ff           call 0x5b4d40
// 0062b32d  85c0                 test eax, eax
// 0062b32f  741e                 je 0x62b34f
// 0062b331  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0062b335  8b4808               mov ecx, dword ptr [eax + 8]
// 0062b338  3bf1                 cmp esi, ecx
// 0062b33a  7503                 jne 0x62b33f
// 0062b33c  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0062b33f  3bcf                 cmp ecx, edi
// 0062b341  7413                 je 0x62b356
// 0062b343  50                   push eax
// 0062b344  8bce                 mov ecx, esi
// 0062b346  e8d599f8ff           call 0x5b4d20
// 0062b34b  85c0                 test eax, eax
// 0062b34d  75e6                 jne 0x62b335
// 0062b34f  5f                   pop edi
// 0062b350  32c0                 xor al, al
// 0062b352  5e                   pop esi
// 0062b353  c20800               ret 8
// 0062b356  d9057c837a00         fld dword ptr [0x7a837c]
// 0062b35c  51                   push ecx
// 0062b35d  8bc8                 mov ecx, eax
// 0062b35f  d91c24               fstp dword ptr [esp]
// 0062b362  e88919faff           call 0x5cccf0
// 0062b367  5f                   pop edi
// 0062b368  5e                   pop esi
// 0062b369  c20800               ret 8

struct MouseCommand {
    void* findTarget(int);
    void* findNext(void*);
    bool handleTarget(void*, float);
};

struct GroupDragTool {
    bool onMouseDown(int, int);
};

extern float g_dragDistance;

bool GroupDragTool::onMouseDown(int a, int b)
{
    MouseCommand* self = (MouseCommand*)this;
    void* found = self->findTarget(a);
    if (found) {
        void* cur = found;
        while (true) {
            int v = *(int*)((char*)cur + 8);
            if (a == v) {
                v = *(int*)((char*)cur + 12);
            }
            if (v == b) {
                float d = g_dragDistance;
                return self->handleTarget(cur, d);
            }
            void* next = self->findNext(cur);
            if (!next) break;
            cur = next;
        }
    }
    return false;
}
