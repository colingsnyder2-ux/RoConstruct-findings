// from server: 99% by atomic.potato
struct Exposer
{
    struct VTable
    {
        void *padding[19];
        void (__thiscall *f)(void *, const char *);
    };

    VTable *vtable;
    void f();
};

void Exposer::f()
{
    vtable->f(this, "S|R,Typ,Pckt#,Frm #,PktID,BitLn,Time     ,Local IP:Port   ,RemoteIP:Port,SPID,SPIN,SPCO,OI,Suffix");
}
