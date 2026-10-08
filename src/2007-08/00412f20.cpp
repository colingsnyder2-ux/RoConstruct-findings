// from server: 95% by colin
// roc 2007-08 00412f20  unit: std::runtime_error  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00412f20
//
// 00412f20  680e000780           push 0x8007000e
// 00412f25  e8d6e0feff           call 0x401000

extern "C" void __stdcall sub_401000(unsigned int code);

void __stdcall sub_412f20()
{
    sub_401000(0x8007000e);
}
