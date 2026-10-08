// from server: 82% by colin
// roc 2007-08 004a63a0  unit: FilePacketLogger  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a63a0

extern "C" int __cdecl fclose(void*);
extern "C" void __cdecl operator_delete(void*);
extern "C" void __cdecl base_destructor(void*);

struct FilePacketLogger {
    void* vtable;
    char pad[0x208];
    void* file;
    void* __thiscall destroy(unsigned int flags);
};

void* FilePacketLogger::destroy(unsigned int flags)
{
    this->vtable = (void*)0x79d224;
    if (this->file) {
        fclose(this->file);
    }
    base_destructor(this);
    if (flags & 1) {
        operator_delete(this);
    }
    return this;
}
