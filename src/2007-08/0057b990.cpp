// from server: 91% by colin
// roc 2007-08 0057b990  unit: RBX::Workspace  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057b990
//
// 0057b990  6860aa5700           push 0x57aa60
// 0057b995  81c168fdffff         add ecx, 0xfffffd68
// 0057b99b  e8a0c5f0ff           call 0x487f40
// 0057b9a0  c3                   ret 

struct RBX_Workspace {
    char pad[0x298];
    void func_0057b990();
};

extern "C" void __stdcall helper_00487f40(void*, void*);

void RBX_Workspace::func_0057b990()
{
    helper_00487f40((char*)this - 0x298, (void*)0x57aa60);
}
