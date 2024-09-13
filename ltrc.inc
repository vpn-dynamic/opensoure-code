VPN -- An application for securely tunneling IP networks
over a single UDP port, with support for SSL/TLS-based
session authentication and key exchange,
packet encryption, packet authentication, and
packet compression.

Required to build Windows resource file
RCCOMPILE = $(RC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES)
$(AM_CPPFLAGS) $(CPPFLAGS) LTRCCOMPILE = $(LIBTOOL) --mode=compile --tag=RC $(RCCOMPILE)

