// from server: 51% by colin
struct CLuaHtmlView_Binder
{
    int Process(char* arg0, int arg1, int arg2, int arg3, int arg4, int arg5,
                int arg6, int arg7, int arg8, int arg9, int arg10, int arg11,
                int arg12, int arg13, int arg14, int arg15, int arg16, int arg17,
                int arg18, int arg19, int arg20, int arg21, int arg22, int arg23,
                int arg24, int arg25, int arg26, int arg27, int arg28, int arg29,
                int arg30, int arg31, int arg32);
};

extern "C" char __cdecl sub_4890A0(void* a, void* b);
extern "C" void __cdecl sub_728F60(void* a);
extern "C" void __cdecl sub_42B400(void* a, void* b, void* c);
extern "C" void __cdecl sub_5F1A40(void* a);

int CLuaHtmlView_Binder::Process(char* arg0, int arg1, int arg2, int arg3, int arg4, int arg5,
                                 int arg6, int arg7, int arg8, int arg9, int arg10, int arg11,
                                 int arg12, int arg13, int arg14, int arg15, int arg16, int arg17,
                                 int arg18, int arg19, int arg20, int arg21, int arg22, int arg23,
                                 int arg24, int arg25, int arg26, int arg27, int arg28, int arg29,
                                 int arg30, int arg31, int arg32)
{
    char local[4];
    int result;

    while (sub_4890A0(&arg0, local) == 0)
    {
        if (*arg0 == 0)
        {
            sub_728F60(local);
            sub_42B400(&arg0, local, local);
            if (*arg0 == 0)
                *arg0 = 1;
        }
        sub_5F1A40(local);
    }

    result = arg1;
    return result;
}
