// from server: 69% by Yeetserama
extern "C" int __stdcall sub_0054c4b0(int, int, int, int, int);

struct UString_sink_stream_buffer
{
    int __cdecl write(int a, int b, int c, int d);
};

int UString_sink_stream_buffer::write(int a, int b, int c, int d)
{
    return sub_0054c4b0(a, b, c, d, 0);
}
