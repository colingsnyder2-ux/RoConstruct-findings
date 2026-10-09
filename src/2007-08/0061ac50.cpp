// from server: 81% by colin
// roc 2007-08 0061ac50  unit: RBX::ToolMouseCommand  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0061ac50
//
// 0061ac50  56                   push esi
// 0061ac51  8bf1                 mov esi, ecx
// 0061ac53  e83867feff           call 0x601390
// 0061ac58  8b8e18010000         mov ecx, dword ptr [esi + 0x118]
// 0061ac5e  85c9                 test ecx, ecx
// 0061ac60  7415                 je 0x61ac77
// 0061ac62  68e46e8c00           push 0x8c6ee4
// 0061ac67  6a00                 push 0
// 0061ac69  81c6e8000000         add esi, 0xe8
// 0061ac6f  56                   push esi
// 0061ac70  e84b91fcff           call 0x5e3dc0
// 0061ac75  5e                   pop esi
// 0061ac76  c3                   ret 
// 0061ac77  33c0                 xor eax, eax
// 0061ac79  5e                   pop esi
// 0061ac7a  c3                   ret 

struct ToolMouseCommand {
    int onEvent_ToolUnequipped();
};

extern "C" void __stdcall sub_601390();
extern "C" void __stdcall sub_5E3DC0(void*, int, void*);

int ToolMouseCommand::onEvent_ToolUnequipped()
{
    sub_601390();
    int* p = (int*)((char*)this + 0x118);
    if (*p != 0) {
        sub_5E3DC0((char*)this + 0xe8, 0, (void*)0x8c6ee4);
    }
    return 0;
}
