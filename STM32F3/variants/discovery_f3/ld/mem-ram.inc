MEMORY
{
  ccm (rwx) : ORIGIN = 0x10000000, LENGTH = 8K
  ram (rwx) : ORIGIN = 0x20000C00, LENGTH = 37K
  rom (rx)  : ORIGIN = 0x08005000, LENGTH = 0K
}
