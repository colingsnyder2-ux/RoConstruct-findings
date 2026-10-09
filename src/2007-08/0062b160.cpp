// from server: 83% by colin
// roc 2007-08 0062b160  unit: RBX::GroupDragTool  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0062b160
//
// 0062b160  56                   push esi
// 0062b161  8bf1                 mov esi, ecx
// 0062b163  807e2c00             cmp byte ptr [esi + 0x2c], 0
// 0062b167  7440                 je 0x62b1a9
// 0062b169  8b442408             mov eax, dword ptr [esp + 8]
// 0062b16d  8b4008               mov eax, dword ptr [eax + 8]
// 0062b170  83e872               sub eax, 0x72
// 0062b173  57                   push edi
// 0062b174  741c                 je 0x62b192
// 0062b176  83e802               sub eax, 2
// 0062b179  7527                 jne 0x62b1a2
// 0062b17b  8b7e20               mov edi, dword ptr [esi + 0x20]
// 0062b17e  e85d08f8ff           call 0x5ab9e0
// 0062b183  50                   push eax
// 0062b184  8bcf                 mov ecx, edi
// 0062b186  e8e559fbff           call 0x5e0b70
// 0062b18b  5f                   pop edi
// 0062b18c  8bc6                 mov eax, esi
// 0062b18e  5e                   pop esi
// 0062b18f  c20400               ret 4
// 0062b192  8b7e20               mov edi, dword ptr [esi + 0x20]
// 0062b195  e8b607f8ff           call 0x5ab950
// 0062b19a  50                   push eax
// 0062b19b  8bcf                 mov ecx, edi
// 0062b19d  e8ce59fbff           call 0x5e0b70
// 0062b1a2  5f                   pop edi
// 0062b1a3  8bc6                 mov eax, esi
// 0062b1a5  5e                   pop esi
// 0062b1a6  c20400               ret 4
// 0062b1a9  33c0                 xor eax, eax
// 0062b1ab  5e                   pop esi
// 0062b1ac  c20400               ret 4

struct MegaDragger;

struct GroupDragTool {
    char pad0[0x20];
    MegaDragger* megaDragger;
    char pad1[0x8];
    bool dragging;
    int onMouseDown(void* inputObject);
};

struct MegaDragger {
    void method(void* arg);
};

extern "C" void* __stdcall sub_5ab950();
extern "C" void* __stdcall sub_5ab9e0();

int GroupDragTool::onMouseDown(void* inputObject)
{
    if (dragging) {
        int code = *(int*)((char*)inputObject + 8);
        code -= 0x72;
        if (code == 0) {
            MegaDragger* d = megaDragger;
            void* p = sub_5ab950();
            d->method(p);
        } else {
            code -= 2;
            if (code == 0) {
                MegaDragger* d = megaDragger;
                void* p = sub_5ab9e0();
                d->method(p);
            }
        }
        return (int)this;
    }
    return 0;
}
