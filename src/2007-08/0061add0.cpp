// from server: 62% by colin
// roc 2007-08 0061add0  unit: RBX::P8Camera::?$GetSetImpl  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0061add0
//
// 0061add0  56                   push esi
// 0061add1  57                   push edi
// 0061add2  8bf1                 mov esi, ecx
// 0061add4  e8b765feff           call 0x601390
// 0061add9  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0061addd  57                   push edi
// 0061adde  8bce                 mov ecx, esi
// 0061ade0  e89bfeffff           call 0x61ac80
// 0061ade5  8b8e18010000         mov ecx, dword ptr [esi + 0x118]
// 0061adeb  85c9                 test ecx, ecx
// 0061aded  7412                 je 0x61ae01
// 0061adef  8d4724               lea eax, [edi + 0x24]
// 0061adf2  50                   push eax
// 0061adf3  6a00                 push 0
// 0061adf5  81c6e8000000         add esi, 0xe8
// 0061adfb  56                   push esi
// 0061adfc  e8bf8ffcff           call 0x5e3dc0
// 0061ae01  8bc7                 mov eax, edi
// 0061ae03  5f                   pop edi
// 0061ae04  5e                   pop esi
// 0061ae05  c20400               ret 4

struct P8CameraGetSetImpl {
    char pad[0x118];
    void* ptr;

    void* __thiscall setValue(void* v);
};

void sub_601390();
void sub_61ac80();
void sub_5e3dc0(void*, int, void*);

void* __thiscall P8CameraGetSetImpl::setValue(void* v)
{
    sub_601390();
    sub_61ac80();
    if (ptr) {
        char* base = (char*)this + 0xe8;
        void* arg = (char*)v + 0x24;
        sub_5e3dc0(base, 0, arg);
    }
    return v;
}
