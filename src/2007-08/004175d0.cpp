// from server: 91% by colin
struct Marshaller {
    int execute(int, int, int, int, int, int);
};

extern "C" int __stdcall sub_416FA0(int, int, int, int);

int Marshaller::execute(int a, int b, int c, int d, int e, int f)
{
    if (f == 0 && b == 0x465) {
        int r = sub_416FA0(0x465, d, c, (int)&f);
        *(int*)e = r;
        return 1;
    }
    return 0;
}
