// from server: 56% by king_originala
extern void (__stdcall *setValues)(int, int, int, int, int);

void applyValues(int location, const float* values)
{
    setValues(location,
              (int)values[0],
              (int)values[5],
              (int)values[10],
              (int)values[15]);
}
