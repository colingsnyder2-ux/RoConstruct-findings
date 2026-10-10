// from server: 50% by Intel
struct XVRecordToggleVerb_XVmf0_Vbind_t_thread_data {
    int get();
};

int XVRecordToggleVerb_XVmf0_Vbind_t_thread_data::get() {
    int functionPtr = *(int*)((char*)this + 0x20);
    int arg = *(int*)((char*)this + 0x24);
    typedef int (__stdcall *FuncType)(int);
    FuncType func = (FuncType)functionPtr;
    return func(arg);
}
