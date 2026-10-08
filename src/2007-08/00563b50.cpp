// from server: 94% by colin
// roc 2007-08 00563b50  unit: RBX::RunCommand  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00563b50
//
// 00563b50  6a01                 push 1
// 00563b52  83c110               add ecx, 0x10
// 00563b55  e8e6e6ffff           call 0x562240
// 00563b5a  33c9                 xor ecx, ecx
// 00563b5c  83b84c01000001       cmp dword ptr [eax + 0x14c], 1
// 00563b63  0f95c1               setne cl
// 00563b66  8ac1                 mov al, cl
// 00563b68  c3                   ret 

struct RunCommand {
    bool isEnabled() const;
};

extern "C" void* __stdcall sub_562240(void*, int);

bool RunCommand::isEnabled() const {
    char* p = (char*)sub_562240((void*)((char*)this + 0x10), 1);
    return *(int*)(p + 0x14c) != 1;
}
