Summary: an audio-processing program for X-windows
Name: galan
Version: 0.3.0_beta9
Release: 1
Copyright: GPL
Group: Applications/Multimedia
Source: galan-0.3.0_beta9.tar.gz
Vendor: Tony Garnock-Jones  Torben Hohn
%description
gAlan is an audio-processing tool (both on-line and off-line) for X
windows and Win32. It allows you to build synthesisers, effects
chains, mixers, sequencers, drum-machines etc. etc. in a modular
fashion by linking together icons representing primitive
audio-processing components.

%prep
%setup
./configure --prefix=/usr

%build
make

%install
make install-strip

%files
%doc AUTHORS COPYING NEWS NOTES README README.w32 TODO TODO.w32

/usr/bin/galan
/usr/lib/galan
