// from server: 76% by colin
// roc 2007-08 005648d0  unit: RBX::UndoState  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005648d0
//
// 005648d0  56                   push esi
// 005648d1  8b742408             mov esi, dword ptr [esp + 8]
// 005648d5  85f6                 test esi, esi
// 005648d7  57                   push edi
// 005648d8  8bf9                 mov edi, ecx
// 005648da  7448                 je 0x564924
// 005648dc  a16c228c00           mov eax, dword ptr [0x8c226c]
// 005648e1  50                   push eax
// 005648e2  8bce                 mov ecx, esi
// 005648e4  e8c78affff           call 0x55d3b0
// 005648e9  85c0                 test eax, eax
// 005648eb  7520                 jne 0x56490d
// 005648ed  8b542410             mov edx, dword ptr [esp + 0x10]
// 005648f1  83ec08               sub esp, 8
// 005648f4  8bcc                 mov ecx, esp
// 005648f6  89642414             mov dword ptr [esp + 0x14], esp
// 005648fa  52                   push edx
// 005648fb  e8308e0200           call 0x58d730
// 00564900  a16c228c00           mov eax, dword ptr [0x8c226c]
// 00564905  50                   push eax
// 00564906  8bce                 mov ecx, esi
// 00564908  e843adfdff           call 0x53f650
// 0056490d  8b470c               mov eax, dword ptr [edi + 0xc]
// 00564910  85c0                 test eax, eax
// 00564912  750b                 jne 0x56491f
// 00564914  897710               mov dword ptr [edi + 0x10], esi
// 00564917  89770c               mov dword ptr [edi + 0xc], esi
// 0056491a  5f                   pop edi
// 0056491b  5e                   pop esi
// 0056491c  c20800               ret 8
// 0056491f  8906                 mov dword ptr [esi], eax
// 00564921  89770c               mov dword ptr [edi + 0xc], esi
// 00564924  5f                   pop edi
// 00564925  5e                   pop esi
// 00564926  c20800               ret 8

struct RBX_UndoState {
    void addWaypoint(void* waypoint, int arg);
};

extern "C" void* __stdcall sub_55D3B0(void* self, void* arg);
extern "C" void __stdcall sub_58D730(void* self, int arg);
extern "C" void __stdcall sub_53F650(void* self, void* arg);

void RBX_UndoState::addWaypoint(void* waypoint, int arg)
{
    if (waypoint != 0) {
        void* g = *(void**)0x8c226c;
        if (sub_55D3B0(waypoint, g) == 0) {
            sub_58D730(&arg, arg);
            void* g2 = *(void**)0x8c226c;
            sub_53F650(waypoint, g2);
        }
    }
    void* head = *(void**)((char*)this + 0xc);
    if (head == 0) {
        *(void**)((char*)this + 0x10) = waypoint;
        *(void**)((char*)this + 0xc) = waypoint;
    } else {
        *(void**)waypoint = head;
        *(void**)((char*)this + 0xc) = waypoint;
    }
}
